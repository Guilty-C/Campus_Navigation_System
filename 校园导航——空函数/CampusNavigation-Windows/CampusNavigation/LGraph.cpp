//
// Created by ����Դ on 24-5-16.
//

#include "LGraph.h"

namespace Graph {
    LGraph::LGraph(bool directed)
        : n_verts(0), m_edges(0), directed(directed), ver_list(std::vector<HeadNode>()) {}

    bool LGraph::exist_vertex(const std::string& name) const {
        //TODO:�ж��Ƿ����name���ƵĽڵ�
        std::cerr << "LGraph::exist_vertex(const std::string &name) ��ûʵ��" << std::endl;
        return false;
    }

    bool LGraph::exist_edge(const std::string& vertex_x_name, const std::string& vertex_y_name) const {
        //TODO:�ж��Ƿ����x-y�ı�
        std::cerr << "LGraph::exist_edge(const std::string &vertex_x_name, const std::string &vertex_y_name) ��ûʵ��" << std::endl;
        return false;
    }

    void LGraph::InsertVertex(const LocationInfo& vertex_info) {
        //TODO:����ڵ㣬�ڵ���Ϣ��LocationInfo�����
        std::cerr << "LGraph::InsertVertex(const LocationInfo &vertex_info) ��ûʵ��" << std::endl;
    }

    void LGraph::DeleteVertex(const LocationInfo& vertex_info) {
        //TODO:ɾ���ڵ㣬�ڵ���Ϣ��LocationInfo�����
        std::cerr << "LGraph::DeleteVertex(const LocationInfo &vertex_info) ��ûʵ��" << std::endl;
    }

    void LGraph::UpdateVertex(const LocationInfo& old_info, LocationInfo& new_info) {
        //TODO:���½ڵ㣬��/�ɽڵ����Ϣ��LocationInfo�����
        std::cerr << "LGraph::UpdateVertex(const LocationInfo &old_info, LocationInfo &new_info) ��ûʵ��" << std::endl;
    }

    VertInfo LGraph::GetVertex(const std::string& name) const {
        //TODO:��ȡ�ڵ㣬�ɽڵ�����ѯ�ڵ���Ϣ
        std::cerr << "LGraph::GetVertex(const std::string &name) ��ûʵ��" << std::endl;
        return VertInfo();
    }

    VertInfo LGraph::GetVertex(const Vertex vertex) const {
        //TODO:��ȡ�ڵ㣬�ɽڵ��ID��ѯ
        std::cerr << "LGraph::GetVertex(const Vertex vertex) ��ûʵ��" << std::endl;
        return VertInfo();
    }

    void LGraph::InsertEdge(const std::string& vertex_x_name, const std::string& vertex_y_name, GElemSet weight) {
        //TODO:�����
        std::cerr << "LGraph::InsertEdge(const std::string &vertex_x_name, const std::string &vertex_y_name, GElemSet weight) ��ûʵ��" << std::endl;

    }

    void LGraph::DeleteEdge(const std::string& vertex_x_name, const std::string& vertex_y_name) {
        //TODO:ɾ���ߣ��������ڵ���ȷ��һ����
        std::cerr << "LGraph::DeleteEdge(const std::string &vertex_x_name, const std::string &vertex_y_name) ��ûʵ��" << std::endl;

    }

    void LGraph::DeleteEdge(Vertex vertex_x, Vertex vertex_y) {
        //TODO:ɾ���ߣ��������ڵ�IDȷ��һ����
        std::cerr << "LGraph::DeleteEdge(Vertex vertex_x, Vertex vertex_y) ��ûʵ��" << std::endl;
    }


    void LGraph::UpdateEdge(const std::string& vertex_x_name, const std::string& vertex_y_name, GElemSet new_weight) {
        //TODO:���±ߣ��������ڵ���ȷ��һ����
        std::cerr << "LGraph::UpdateEdge(const std::string &vertex_x_name, const std::string &vertex_y_name, GElemSet new_weight) ��ûʵ��" << std::endl;
    }

    GElemSet LGraph::GetEdge(const std::string& vertex_x_name, const std::string& vertex_y_name) const {
        //TODO:��ȡ�ߵ���Ϣ
        std::cerr << "LGraph::GetEdge(const std::string &vertex_x_name, const std::string &vertex_y_name) ��ûʵ��" << std::endl;
        return GElemSet();
    }

    std::vector<EdgeNode> LGraph::SortedEdges(std::function<bool(const GElemSet&, const GElemSet&)> cmp) const {
        //TODO:��ȡ����Ȩ�͸���������������б�
        std::cerr << "LGraph::SortedEdges(std::function<bool(const GElemSet &, const GElemSet &)> cmp) ��ûʵ��" << std::endl;
        return std::vector<EdgeNode>();
    }


}