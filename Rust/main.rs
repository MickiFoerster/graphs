use std::fmt;

#[derive(Debug)]
struct Node<T> {
    data: T,
}

impl<T: fmt::Display> fmt::Display for Node<T> {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", self.data)
    }
}

#[derive(Debug)]
struct Edge<'z,T> {
    from: &'z Node<T>,
    to  : &'z Node<T>
}

#[derive(Debug)]
struct Graph<'z, T> {
    edges: Vec<Edge<'z,T>>
}

impl<'z, T: std::fmt::Display> Graph<'z, T> {
    fn connect(&mut self, node_from: &'z Node<T>, node_to: &'z Node<T>) {
        self.edges.push( Edge::<'z, T>{
            from: node_from,
            to: node_to,
        });
    }

    fn dot_dump(&self) {
        println!("graph {{");
        for e in &self.edges {
            println!("{} -- {}", e.from, e.to);
        }
        println!("}}");
    }
}

fn main() {
   let a = Node::<String>{ data: String::from("A") }; 
   let b = Node::<String>{ data: String::from("B") }; 
   let c = Node::<String>{ data: String::from("C") }; 
   let d = Node::<String>{ data: String::from("D") }; 
   let e = Node::<String>{ data: String::from("E") }; 
   let f = Node::<String>{ data: String::from("F") }; 

   let mut graph = Graph::<String> { edges: Vec::new() };
   graph.connect(&a, &b);
   graph.connect(&a, &c);
   graph.connect(&c, &d);
   graph.connect(&d, &e);
   graph.connect(&d, &f);
   graph.connect(&f, &a);
   graph.dot_dump();
}
