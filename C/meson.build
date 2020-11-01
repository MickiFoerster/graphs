project('graphs', 'C')

cargs = ['-std=c11', '-Wall', '-ggdb3']

libgraphs = static_library(
  'graphs',
  sources: ['graphs.c'],
  c_args: cargs,
)

main = executable(
  'graphs_test',
  sources: ['main.c'],
  link_with: libgraphs
)
