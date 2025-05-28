//
// Created by 刘凯源 on 24-5-16.
//

#include "LGraph.h"

namespace Graph {
    LGraph::LGraph(bool directed)
        : n_verts(0), m_edges(0), directed(directed), ver_list(std::vector<HeadNode>()) {}

    bool LGraph::exist_vertex(const std::string& name) const {
        //TODO:判断是否存在name名称的节点
        std::cerr << "LGraph::exist_vertex(const std::string &name) 还没实现" << std::endl;
        return false;
    }

    bool LGraph::exist_edge(const std::string& vertex_x_name, const std::string& vertex_y_name) const {
        //TODO:判断是否存在x-y的边
        std::cerr << "LGraph::exist_edge(const std::string &vertex_x_name, const std::string &vertex_y_name) 还没实现" << std::endl;
        return false;
    }

    void LGraph::InsertVertex(const LocationInfo& vertex_info) {
        //TODO:插入节点，节点信息由LocationInfo类给出
        std::cerr << "LGraph::InsertVertex(const LocationInfo &vertex_info) 还没实现" << std::endl;
    }

    void LGraph::DeleteVertex(const LocationInfo& vertex_info) {
        //TODO:删除节点，节点信息由LocationInfo类给出
        std::cerr << "LGraph::DeleteVertex(const LocationInfo &vertex_info) 还没实现" << std::endl;
    }

    void LGraph::UpdateVertex(const LocationInfo& old_info, LocationInfo& new_info) {
        //TODO:更新节点，新/旧节点的信息由LocationInfo类给出
        std::cerr << "LGraph::UpdateVertex(const LocationInfo &old_info, LocationInfo &new_info) 还没实现" << std::endl;
    }

    VertInfo LGraph::GetVertex(const std::string& name) const {
        //TODO:获取节点，由节点名查询节点信息
        std::cerr << "LGraph::GetVertex(const std::string &name) 还没实现" << std::endl;
        return VertInfo();
    }

    VertInfo LGraph::GetVertex(const Vertex vertex) const {
        //TODO:获取节点，由节点的ID查询
        std::cerr << "LGraph::GetVertex(const Vertex vertex) 还没实现" << std::endl;
        return VertInfo();
    }

    void LGraph::InsertEdge(const std::string& vertex_x_name, const std::string& vertex_y_name, GElemSet weight) {
        //TODO:插入边
        std::cerr << "LGraph::InsertEdge(const std::string &vertex_x_name, const std::string &vertex_y_name, GElemSet weight) 还没实现" << std::endl;

    }

    void LGraph::DeleteEdge(const std::string& vertex_x_name, const std::string& vertex_y_name) {
        //TODO:删除边，由两个节点名确定一条边
        std::cerr << "LGraph::DeleteEdge(const std::string &vertex_x_name, const std::string &vertex_y_name) 还没实现" << std::endl;

    }

    void LGraph::DeleteEdge(Vertex vertex_x, Vertex vertex_y) {
        //TODO:删除边，由两个节点ID确定一条边
        std::cerr << "LGraph::DeleteEdge(Vertex vertex_x, Vertex vertex_y) 还没实现" << std::endl;
    }


    void LGraph::UpdateEdge(const std::string& vertex_x_name, const std::string& vertex_y_name, GElemSet new_weight) {
        //TODO:更新边，由两个节点名确定一条边
        std::cerr << "LGraph::UpdateEdge(const std::string &vertex_x_name, const std::string &vertex_y_name, GElemSet new_weight) 还没实现" << std::endl;
    }

    GElemSet LGraph::GetEdge(const std::string& vertex_x_name, const std::string& vertex_y_name) const {
        //TODO:获取边的信息
        std::cerr << "LGraph::GetEdge(const std::string &vertex_x_name, const std::string &vertex_y_name) 还没实现" << std::endl;
        return GElemSet();
    }

    std::vector<EdgeNode> LGraph::SortedEdges(std::function<bool(const GElemSet&, const GElemSet&)> cmp) const {
        //TODO:获取按边权和给定规则排序的所有边
        std::cerr << "LGraph::SortedEdges(std::function<bool(const GElemSet &, const GElemSet &)> cmp) 还没实现" << std::endl;
        return std::vector<EdgeNode>();
    }


}