package graphs

import "fmt"

type Node struct {
	data       interface{}
	neighbours []*Node
	visited    bool
}

func NewNode(data interface{}) *Node {
	return &Node{
		data:       data,
		neighbours: []*Node{},
	}
}

func (node *Node) Connect(neighbour *Node) {
	node.neighbours = append(node.neighbours, neighbour)
}

func (node *Node) String() string {
	if node.visited {
		return ""
	}
	var s string
	node.visited = true
	s += fmt.Sprintf("%v\n", node.data)
	for _, n := range node.neighbours {
		s += fmt.Sprintf("%v -- %v\n", node.data, n.data)
		s += fmt.Sprintf("%v", n)
	}
	return s
}

func (node *Node) DotDump() string {
	var s string
	s += fmt.Sprintln("graph {")
	s += fmt.Sprintf("%v", node)
	s += fmt.Sprintln("}")
	return s
}
