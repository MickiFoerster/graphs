#[derive(Debug)]
struct Node<'z,T> {
    data: T,
}

impl<'z,T> Node<'z,T> {
    fn connect(&mut self, node: &'z Node<'z,T>) {
        self.neighbours.push(node);
    }
}

struct Edge<'z,T> {
    from: &Node<'z,T>,
    to  : &Node<'z,T>
}

fn main() {
   let mut a = Node::<String>{ data: String::from("A"), neighbours: Vec::new() }; 
   let b = Node::<String>{ data: String::from("B"), neighbours: Vec::new() }; 
   let mut c = Node::<String>{ data: String::from("C"), neighbours: Vec::new() }; 
   let mut d = Node::<String>{ data: String::from("D"), neighbours: Vec::new() }; 
   let e = Node::<String>{ data: String::from("E"), neighbours: Vec::new() }; 
   let mut f = Node::<String>{ data: String::from("F"), neighbours: Vec::new() }; 
   a.connect(&b);
   a.connect(&c);
   c.connect(&mut d);
   d.connect(&e);
   d.connect(&f);
   f.connect(&a);
   println!("{:?}", a);
}
