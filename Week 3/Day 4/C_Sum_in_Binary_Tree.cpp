#include <bits/stdc++.h>
using namespace std;
vector<int>v;  
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        // cout << f->val << " ";
        v.push_back(f->val);

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<int> q1;

        for (int i = 1; i <= n; i++)
        {
            q1.push(i);
        }
        Node *root;
        queue<Node *> q2;
        if (!q1.empty())
        {
            root = new Node(q1.front());
            q1.pop();
            q2.push(root);
        }

        while (!q2.empty())
        {
            Node *p = q2.front();
            q2.pop();
            int l, r;
            if (!q1.empty())
            {
                l = q1.front();
                q1.pop();
            }
            else
            {
                l = -1;
            }
            if (!q1.empty())
            {
                r = q1.front();
                q1.pop();
            }
            else
            {
                r = -1;
            }

            Node *myLeft;
            Node *myRight;
            if (l == -1)
                myLeft = NULL;
            else
                myLeft = new Node(l);
            if (r == -1)
                myRight = NULL;
            else
                myRight = new Node(r);

            p->left = myLeft;
            p->right = myRight;

            if (p->left)
                q2.push(p->left);
            if (p->right)
                q2.push(p->right);
        }
        v.clear();
        level_order(root);
        for(auto it=v.begin();it<v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}
