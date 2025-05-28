//
// Created by ����Դ on 24-10-13.
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
            // ���鼯���캯��
            explicit DSU(int n) {
                // TODO: ����ɲ��鼯�Ĺ��캯��
            }

            // ���Ҹ��ڵ㲢·��ѹ��
            int find(int x) {
                // TODO: ����Ԫ�صĸ��ڵ㣬�����·��ѹ��
                return -1;
            }

            // �ϲ���������
            void unite(int x, int y) {
                // TODO: �ϲ�����
            }

            // ��������ڵ��Ƿ�����ͬһ����
            bool same(int x, int y) const {
                // TODO: ��������ڵ��Ƿ�����ͬһ������
                return false;
            }
        };

        std::list<Vertex> EulerCircle(const LGraph& graph); //����ŷ����·
        bool HaveEulerCircle(const LGraph& graph); //�ж��Ƿ����ŷ����·
        bool IsConnected(LGraph& graph); //�ж�ͼ�Ƿ���ͨ
        int GetShortestPath(const LGraph& graph, const std::string& vertex_name_x,
            const std::string& vertex_name_y); //���㵥Դ���·��
        int TopologicalShortestPath(const LGraph& graph, std::vector<std::string> path); //�����������޵����·��
        std::vector<EdgeNode> MinimumSpanningTree(const LGraph& graph); //������С������
    }
}
#endif //CAMPUSNAVIGATION_ALGORITHM_H
