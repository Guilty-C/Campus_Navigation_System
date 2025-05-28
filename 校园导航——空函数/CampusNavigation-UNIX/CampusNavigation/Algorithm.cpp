//
// Created by 刘凯源 on 24-10-13.
//
#include "Algorithm.h"

namespace Graph {
    namespace Algorithm {
        std::list<Vertex> GetCircuit(LGraph &graph, Vertex start) {
            //TODO:从给定点出发获得一条回路
            std::cerr << "GetCircuit 还没实现" << std::endl;
            return {};
        }

        std::list<Vertex> EulerCircle(const LGraph &graph) {
            //TODO:获取欧拉回路,你可以使用GetCircuit函数
            std::cerr << "EulerCircle 还没实现" << std::endl;
            return {};
        }

        bool HaveEulerCircle(const LGraph &graph) {
            //TODO:判断是否有欧拉回路
            std::cerr << "HaveEulerCircle 还没实现" << std::endl;
            return false;
        }

        void BFSv(LGraph &graph, Vertex v, std::vector<bool> &visited) {
            //TODO:广度优先搜索整个图
            std::cerr << "BFSv 还没实现" << std::endl;
        }

        bool IsConnected(LGraph &graph) {
            //TODO:判断图是否联通
            std::cerr << "IsConnected 还没实现" << std::endl;
            return false;
        }

        int GetShortestPath(const LGraph &graph, const std::string &vertex_name_x, const std::string &vertex_name_y) {
            //TODO:获取两点之间的最短路径
            std::cerr << "GetShortestPath 还没实现" << std::endl;
            return -1;
        }


        int TopologicalShortestPath(const LGraph &graph, std::vector<std::string> path) {
            //TODO:获取拓扑受限的最短路径，拓扑序由path给出
            std::cerr << "TopologicalShortestPath 还没实现" << std::endl;
            return -1;
        }

        std::vector<EdgeNode> MinimumSpanningTree(const LGraph &graph) {
            //TODO:计算最小生成树，并返回树上的边
            std::cerr << "MinimumSpanningTree 还没实现" << std::endl;
            return {};
        }
    }
}