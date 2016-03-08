#include "AbstractMesh.hpp"

AbstractMesh::AbstractMesh()
{
}

AbstractMesh::~AbstractMesh()
{
}

unsigned AbstractMesh::getNodesNumber() const
{
	return _nodes.size();
}

Node AbstractMesh::getNode(unsigned localIndex) const
{
	unsigned pureLocalIndex = nodeMapping(localIndex);
	return _nodes[pureLocalIndex];
}

