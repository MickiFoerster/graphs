package main

import (
	"fmt"

	"github.com/MickiFoerster/graphs/golang/graphs"
)

func main() {
	A := graphs.NewNode("A")
	B := graphs.NewNode("B")
	C := graphs.NewNode("C")
	D := graphs.NewNode("D")
	E := graphs.NewNode("E")
	F := graphs.NewNode("F")
	A.Connect(B)
	A.Connect(C)
	C.Connect(D)
	D.Connect(E)
	D.Connect(F)
	F.Connect(A)

	fmt.Println("graph {")
	fmt.Printf("%v\n", A)
	fmt.Println("}")
}
