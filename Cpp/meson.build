project('graphs', 'cpp')

cppargs = ['-std=c++17', '-Wall', '-ggdb3']

libgraphs = static_library(
  'graphs',
  sources: ['graphs.cpp'],
  cpp_args: cppargs,
)

main = executable(
  'graphs_test',
  sources: ['main.cpp'],
  link_with: libgraphs
)
