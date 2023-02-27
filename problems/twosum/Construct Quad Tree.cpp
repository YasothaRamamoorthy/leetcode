/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
Node* QuadTree(vector<vector<int>>& grid,int rowstart,int rowend,int colstart,int colend)
{
    if(rowstart > rowend || colstart > colend)//base condition
    {  return nullptr;}

    //checking whether it is leaf or not

    bool isleaf=true;//root is not leaf so true
    int val=grid[rowstart][colstart];//comparing grid[0][1] element with all subgrid element

    int row=0;
    int column=0;
    while(row<=rowend)
    {
        while(column<=colend)
        {
            if(grid[row][column]!=val)
            {
                isleaf=false;
                break;
            }
            column++;
        }
        if(!isleaf)
        {
            break;
        }
        row++;
    }
    if(isleaf)
    return new Node(val,true);


    int row_mid= (rowstart+rowend)/2;
    int column_mid= (colstart+colend)/2;


    Node* topleft= QuadTree(grid,rowstart,row_mid,colstart,column_mid);
    Node* topright= QuadTree(grid,rowstart,row_mid,column_mid+1,colend-1);
    Node* bottomleft=QuadTree(grid,row_mid,rowend-1,colstart,column_mid);
    Node* bottomright = QuadTree(grid,row_mid,rowend-1,column_mid+1,colend-1);

    return new Node(false,false,topleft,topright,bottomleft,bottomright);
}

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        int size=grid.size();
        return QuadTree(grid,0,size-1,0,size-1);
    }
};

