#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include "LGraph.h"
#include "Algorithm.h"
#include "LocationInfo.h"
#include "GraphException.h"

using Graph::LGraph;
using Graph::VertInfo;
using namespace Graph::Algorithm;

static std::string trim(const std::string& s) {
    auto l = s.find_first_not_of(" \t\r\n");
    if (l == std::string::npos) return "";
    auto r = s.find_last_not_of(" \t\r\n");
    return s.substr(l, r - l + 1);
}


// Hint: �������д����Ŀ�����������ļ���������backup�ļ����л�ȡԭʼ�ļ�
// TODO: ����ݿ�ִ���ļ���csv��λ����д�ļ�·��
const std::string nodes_path{ "nodes.csv" };
const std::string edges_path{ "edges.csv" };

struct edge {
    std::string from;
    std::string to;
    int length;
};

void init(LGraph& graph);

std::vector<VertInfo> read_nodes(const std::string& nodes_path);

std::vector<edge> read_edges(const std::string& edges_path);

void store_nodes(const std::string& nodes_path, const LGraph& graph);

void store_edges(const std::string& edges_path, const LGraph& graph);

void show_all_nodes(const LGraph& graph);

void show_all_edges(const LGraph& graph);

int main() {
    LGraph graph(false); //��ʼ��һ������ͼ��
    init(graph);
    while (true) {
        int choice{ 0 };
        std::cout << "��ӭʹ��У԰����ϵͳ��" << std::endl
            << "��ѡ����Ҫ���еĲ�����" << std::endl
            << "1.������ز���" << std::endl
            << "2.����ز���" << std::endl
            << "3.���ļ������¼��ص����" << std::endl
            << "4.�Ƿ����ŷ��ͨ·" << std::endl
            << "5.��������������̾���" << std::endl
            << "6.����С������" << std::endl
            << "7.�����������ʱ�����·��" << std::endl
            << "8.�˳�����" << std::endl
            << "���������ǰ�����֣�";
        std::cin >> choice;
        if (choice == 1) { // ������ز���
            std::cout << "������ز�����" << std::endl
                << "1.����ض�������Ϣ" << std::endl
                << "2.������ж�����Ϣ" << std::endl
                << "3.���һ������" << std::endl
                << "4.ɾ��һ������" << std::endl
                << "5.�洢���㵽�ļ���" << std::endl
                << "6.�ص���һ���˵�" << std::endl
                << "���������ǰ�����֣�";
            std::cin >> choice;
            if (choice == 1) {
                std::string name;
                std::cout << "�����붥�����ƣ�";
                std::cin >> name;
                try {
                    VertInfo v{ graph.GetVertex(name) };
                    std::cout << "�������ƣ�" << v.name << std::endl
                        << "�������ͣ�" << v.type << std::endl
                        << "��������ʱ�䣺" << v.visitTime << std::endl;

                }
                catch (Graph::GraphException& e) {
                    std::cout << "����Ϊ " << name << " �Ķ��㲻����" << std::endl;
                }
            }
            else if (choice == 2) {
                std::cout << "��������, ��������, ��������ʱ�䣺" << std::endl;
                show_all_nodes(graph);
            }
            else if (choice == 3) {
                std::cout << "�����붥�����ƣ��������ͣ���������ʱ��(�ո�ָ�)��";
                std::string name, type;
                int visit_time;
                std::cin >> name >> type >> visit_time;
                try {
                    graph.InsertVertex({ name, visit_time, type });
                }
                catch (Graph::GraphException& e) {
                    std::cout << e.what() << std::endl;
                }
            }
            else if (choice == 4) {
                std::cout << "�����붥�����ƣ�";
                std::string name;
                std::cin >> name;
                try {
                    graph.DeleteVertex({ name, 0, "" });
                }
                catch (Graph::GraphException& e) {
                    std::cout << e.what() << std::endl;
                }
            }
            else if (choice == 5) {
                std::cout << "���ڽ�����洢��test_nodes.csv��..." << std::endl;
                store_nodes("test_nodes.csv", graph);
                std::cout << "�洢�ɹ���" << std::endl;
            }
        }
        else if (choice == 2) { // ����ز���
            std::cout << "����ز�����" << std::endl
                << "1.����ض�����Ϣ" << std::endl
                << "2.������б���Ϣ" << std::endl
                << "3.���һ����" << std::endl
                << "4.ɾ��һ����" << std::endl
                << "5.�洢�ߵ��ļ���" << std::endl
                << "6.�ص���һ���˵�" << std::endl
                << "���������ǰ�����֣�";
            std::cin >> choice;
            if (choice == 1) {
                std::string from, to;
                std::cout << "������ߵ�������յ�(�ո�ָ�)��";
                std::cin >> from >> to;
                try {
                    Graph::GElemSet w{ graph.GetEdge(from, to) };
                    std::cout << from << " <---> " << to << " ����Ϊ��" << w << std::endl;
                }
                catch (Graph::GraphException& e) {
                    std::cout << from << " <---> " << to << " �����ڣ�" << std::endl;
                }
            }
            else if (choice == 2) {
                std::cout << "���, �յ�, ���룺" << std::endl;
                show_all_edges(graph);
            }
            else if (choice == 3) {
                std::cout << "������������ƣ��յ����ƣ�����(�ո�ָ�)��";
                std::string from, to;
                int length;
                std::cin >> from >> to >> length;
                graph.InsertEdge(from, to, length);
            }
            else if (choice == 4) {
                std::cout << "������������ƣ��յ�����(�ո�ָ�)��";
                std::string from, to;
                std::cin >> from >> to;
                graph.DeleteEdge(from, to); // ɾ��һ����
            }
            else if (choice == 5) {
                std::cout << "���ڽ��ߴ洢��test_edges.csv�ļ���..." << std::endl;
                store_edges("test_edges.csv", graph);
                std::cout << "�洢�ɹ���" << std::endl;
            }
        }
        else if (choice == 3) {// ���ļ������¼��ص����
            init(graph);
        }
        else if (choice == 4) { // �Ƿ����ŷ��ͨ·
            auto res = HaveEulerCircle(graph);
            std::cout << (res ? "����ŷ����·" : "������ŷ����·") << std::endl;
        }
        else if (choice == 5) { // ��������������̾���
            std::cout << "�����������ص㣬ʹ�ÿո�ֿ���" << std::endl;
            std::string x, y;
            std::cin >> x >> y;
            try {
                std::cout << x << "��" << y << "֮�����̾���Ϊ��" << GetShortestPath(graph, x, y) << std::endl;

            }
            catch (Graph::GraphException& e) {
                std::cout << "���ҵ�����յľ���" << std::endl;
            }
        }
        else if (choice == 6) { // ����С������
            if (IsConnected(graph)) {
                std::cout << "��С�������ĵ����£�";
                auto res = MinimumSpanningTree(graph);
                int sum = 0;
                for (auto item : res) {
                    const auto& e = edge{ graph.List()[item.from].data.name, graph.List()[item.dest].data.name, item.weight };
                    std::cout << e.from << "," << e.to << "," << e.length << std::endl;
                    sum += e.length;
                }
                std::cout << "��Ȩ��Ϊ" << sum << std::endl;
            }
            else {
                std::cout << "ͼ����ͨ" << std::endl;
            }
        }
        else if (choice == 7) { // �����������ʱ�����·��
            std::cout << "��������ϣ���������򣬵�һ��һ��nΪ���г��ȣ��ڶ���n���ص�Ϊ��������" << std::endl;
            int n;
            std::vector<std::string> list;
            std::cin >> n;
            while (n--) {
                std::string x;
                std::cin >> x;
                list.push_back(x);
            }
            std::cout << "���·��Ϊ" << TopologicalShortestPath(graph, list) << std::endl;
        }
        else {
            std::cout << "��л����ʹ�ã��ټ���\n �����ߣ�\\lky1433223/ \\Voltline/" << std::endl;
            break;
        }
    }
    return 0;
}

/* ���ļ��ж�ȡ������Ϣ
 * @param nodes_path: �����ļ�·��
 * @return: ������ȡ�������ж����std::vector
 */
std::vector<VertInfo> read_nodes(const std::string& nodes_path) {
    std::vector<VertInfo> nodes;
    std::ifstream fin(nodes_path);
    if (!fin.is_open()) {
        std::cerr << "Error: �޷����ļ� " << nodes_path << std::endl;
        return nodes;
    }

    std::string line;
    while (std::getline(fin, line)) {
        // 1) ȥ��������β�հ�
        line = trim(line);

        // 2) �������л�ע���У��� '#' ��ͷ��
        if (line.empty() || line[0] == '#')
            continue;

        // 3) �� istringstream ��� getline �� ',' �з�����
        std::istringstream iss(line);
        std::string name, timeStr, category;
        if (!std::getline(iss, name, ','))     continue;
        if (!std::getline(iss, timeStr, ','))  continue;
        if (!std::getline(iss, category))      continue;  // ������β

        // 4) �ٴ�ȥ�����ֶ���β�հ�
        name = trim(name);
        timeStr = trim(timeStr);
        category = trim(category);

        // 5) ��ʱ���ֶ�ת��Ϊ����
        int visitTime = 0;
        try {
            visitTime = std::stoi(timeStr);
        }
        catch (const std::exception&) {
            std::cerr << "Warning: �޷�����ʱ���ֶ�: '"
                << timeStr << "'��������һ��\n";
            continue;
        }

        // 6) ����ṹ�岢���� vector
        nodes.push_back(VertInfo{ name, visitTime, category });
    }

    fin.close();
    return nodes;
}


/* ���ļ��ж�ȡ����Ϣ
 * @param edges_path: ���ļ�·��
 * @return: ������ȡ�������бߵ�std::vector
 */
std::vector<edge> read_edges(const std::string& edges_path) {
    // TODO: ��ο�read_nodes��������������ʾ�����edges.csv�ļ������ݣ���ɱ������Ķ���
    return std::vector<edge>();
}

void init(LGraph& graph) {
    // ���� ������ӣ��������еص� ����
    auto nodes = read_nodes("nodes.csv");
    for (const auto& v : nodes) {
        graph.InsertVertex(v);
    }

    // ����ѡ����ӡ��֤
    // std::cout << "�Ѽ��صص���: " << graph.VertexCount() << std::endl;

    // ���� ���Ŷ������е�· ����
    auto edges = read_edges("edges.csv");
    for (const auto& e : edges) {
        graph.InsertEdge(e.u, e.v, e.w);
    }
}

/* ��ӡĿǰ�����ж���
 * @param graph: ͼ
 */
void show_all_nodes(const LGraph& graph) {
    // TODO: ʵ�ִ�ӡ���ж�����Ϣ
    // TODO: ÿ�������ʽ��������,��������,�Ƽ�����ʱ��
    std::cerr << "show_all_nodes��ûʵ��" << std::endl;

}

/* ��ӡĿǰ�����б�
 * @param graph: ͼ
 */
void show_all_edges(const LGraph& graph) {
    // LGraph��ֻ�ṩ�˻�ȡ�ڽӱ�ͻ�ȡ��������ıߵķ���
    // Ϊ���ܹ���ȡ��ÿ���ߵ�Ԫ��Ϣ��������Ҫ������������������Ϣ�Ļ�ȡ
    const auto& graph_edges{ graph.SortedEdges() };       // ��ȡ��������ı�
    const auto& graph_list{ graph.List() };               // ��ȡ�ڽӱ�
    for (const auto& en : graph_edges) {                 // �����ߣ�ͨ���±�����ȡ��Ӧ�Ķ�����Ϣ
        const auto& e = edge{ graph_list[en.from].data.name, graph_list[en.dest].data.name, en.weight };
        std::cout << e.from << "," << e.to << "," << e.length << std::endl;
    }
}

/* ��������Ϣ�洢���ļ���
 * @param nodes_path: �����ļ�·��
 * @param graph: ͼ
 */
void store_nodes(const std::string& nodes_path, const LGraph& graph) {
    std::ofstream fout(nodes_path);                                         // ͨ��Ŀ¼�����ļ������
    const auto& graph_list{ graph.List() };                                   // ͨ��LGraph�����List()��������ڽӱ�
    for (const auto& n : graph_list) {                                       // �����ڽӱ��е�ÿ������
        const auto& v = n.data;                                             // ��ö����е�Ԫ����
        fout << v.name << "," << v.type << "," << v.visitTime << std::endl; // ���ն���洢�ĸ�ʽ���������뵽�ļ���
    }
    fout.close();                                                           // ��ʹ�����κ��ļ����󣬶�Ҫʹ��close�����ر�
}

/* ������Ϣ�洢���ļ���
 * @param edges_path: ���ļ�·��
 * @param graph: ͼ
 */
void store_edges(const std::string& edges_path, const LGraph& graph) {
    // TODO: ��ο�store_nodes��������������ʾ�����edges.csv�ļ�������
    // TODO: �Լ�show_all_edges�����л�ȡ�ߵ�Ԫ��Ϣ�ķ�ʽ���store_edges�����Ķ���
}