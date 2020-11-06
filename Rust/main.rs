struct Node<T><'z> {
    data: T,
    neighbours: Vec<&Node>
}


fn main() {
   let n = Node<i32>{ data: 23 }; 
}
