# Tree
- a hierarchical structure to orginze data
- nodes / edges 

- topmost - root
- level : count of edges
- neighbour : parent and child of a node are neighbours
- degree of a node : no of branches / edges
    - indirection : coming in
    - outdirection : going out

- for root indirection is 0
- all other have to have indegree of exactly 1
- siblings : two nodes with same parent, siblings share level, but not all nodes on same level are siblings
- ancestor : any node in path to root
- path : sequence of node such that each node is adjcent
- height/depth of a tree : `max level of a leaf + 1`

## Convert a tree to parenthesis representation

```
convert-to-parenthesis-style(root):
    if(root has children){
        print('parenthesis')
        convert-to-parenthesis-style(children-one-by-one)
        print('closing parentheis');
    }
```