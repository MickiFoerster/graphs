package graphs

type Node struct {
	data       interface{}
	neighbours []Node
}

func NewNode(data interface{}) *Node {
	return &Node{
		data:       data,
		neighbours: []Node{},
	}
}
