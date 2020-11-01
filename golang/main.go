package main

import "fmt"
import "github.com/MickiFoerster/graphs/golang/graphs"

func main() {
	A := graphs.NewNode("A")
    fmt.Println(&A)
}
