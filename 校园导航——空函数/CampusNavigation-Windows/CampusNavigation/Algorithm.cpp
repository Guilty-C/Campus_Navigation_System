//
// Created by ����Դ on 24-10-13.
//
#include "Algorithm.h"

namespace Graph {
    namespace Algorithm {
        std::list<Vertex> GetCircuit(LGraph& graph, Vertex start) {
            //TODO:�Ӹ�����������һ����·
            std::cerr << "GetCircuit ��ûʵ��" << std::endl;
            return {};
        }

        std::list<Vertex> EulerCircle(const LGraph& graph) {
            //TODO:��ȡŷ����·,�����ʹ��GetCircuit����
            std::cerr << "EulerCircle ��ûʵ��" << std::endl;
            return {};
        }

        bool HaveEulerCircle(const LGraph& graph) {
            //TODO:�ж��Ƿ���ŷ����·
            std::cerr << "HaveEulerCircle ��ûʵ��" << std::endl;
            return false;
        }

        void BFSv(LGraph& graph, Vertex v, std::vector<bool>& visited) {
            //TODO:���������������ͼ
            std::cerr << "BFSv ��ûʵ��" << std::endl;
        }

        bool IsConnected(LGraph& graph) {
            //TODO:�ж�ͼ�Ƿ���ͨ
            std::cerr << "IsConnected ��ûʵ��" << std::endl;
            return false;
        }

        int GetShortestPath(const LGraph& graph, const std::string& vertex_name_x, const std::string& vertex_name_y) {
            //TODO:��ȡ����֮������·��
            std::cerr << "GetShortestPath ��ûʵ��" << std::endl;
            return -1;
        }


        int TopologicalShortestPath(const LGraph& graph, std::vector<std::string> path) {
            //TODO:��ȡ�������޵����·������������path����
            std::cerr << "TopologicalShortestPath ��ûʵ��" << std::endl;
            return -1;
        }

        std::vector<EdgeNode> MinimumSpanningTree(const LGraph& graph) {
            //TODO:������С�����������������ϵı�
            std::cerr << "MinimumSpanningTree ��ûʵ��" << std::endl;
            return {};
        }
    }
}