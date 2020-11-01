package graphs

type Node struct {
	data       interface{}
	neighbours []Node
}

func newNode(data interface{}) *Node {
	return &Node{
		data:       data,
		neighbours: []Node{},
	}
}
