//
// Created by 刘凯源 on 24-10-13.
//

#ifndef CAMPUSNAVIGATION_ALGORITHM_H
#define CAMPUSNAVIGATION_ALGORITHM_H

#include "LGraph.h"

namespace Graph {
    namespace Algorithm {
        class DSU {
        private:
            std::vector<int> parent, rank;
        public:
            // 并查集构造函数
            explicit DSU(int n) {

            }

            // 查找根节点并路径压缩
            int find(int x) {

            }

            // 合并两个集合
            void unite(int x, int y) {

            }

            // 检查两个节点是否属于同一集合
            bool same(int x, int y) {
            }
        };

        std::list<Vertex> EulerCircle(const LGraph &graph); //计算欧拉回路
        bool HaveEulerCircle(const LGraph &graph); //判断是否存在欧拉回路
        bool IsConnected(LGraph &graph); //判断图是否联通
        int GetShortestPath(const LGraph &graph, const std::string &vertex_name_x,
                            const std::string &vertex_name_y); //计算单源最短路径
        int TopologicalShortestPath(const LGraph &graph, std::vector<std::string> path); //计算拓扑受限的最短路径
        std::vector<EdgeNode> MinimumSpanningTree(const LGraph &graph); //计算最小生成树
    }
}
#endif //CAMPUSNAVIGATION_ALGORITHM_H
