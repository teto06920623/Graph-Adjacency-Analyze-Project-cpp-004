#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//  Bipartite أم لا باستخدام (BFS coloring)
bool isBipartite(const vector<vector<int>> &adj, int n)
{
    vector<int> color(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            queue<int> q;
            q.push(i);
            color[i] = 1;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                // لوب العناصر
                for (int v = 0; v < n; v++)
                {
                    // إذا كان هناك رابط (Edge) بين u و v
                    if (adj[u][v] > 0)
                    {
                        if (color[v] == -1)
                        {
                            // تلوين الفيرتايل بلون معاكس للفيرتايل الحالي
                            color[v] = 1 - color[u];
                            q.push(v);
                        }
                        else if (color[v] == color[u])
                        {
                            // إذا كان الفيرتايل له نفس اللون، فالجراف ليس Bipartite
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main()
{
    int n;

    char q = 'y';
    while (q == 'y')
    {

        // 1. طلب حجم المصفوفة (Order of the Matrix)
        cout << "------------------------------------------" << endl;
        cout << "Enter the order of the Matrix: ";
        cin >> n;

        vector<vector<int>> adj(n, vector<int>(n));

        // 2. إدخال عناصر المصفوفة
        cout << "\nEnter the Adjacency Matrix elements:\n";
        for (int i = 0; i < n; i++)
        {
            cout << "Row " << i + 1 << " elements: ";
            for (int j = 0; j < n; j++)
            {
                cin >> adj[i][j];
            }
        }

        // 3. عرض شكل المصفوفة
        cout << "\n------------------------------------------" << endl;
        cout << "       Adjacency Matrix Representation      " << endl;
        cout << "------------------------------------------" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "| ";
            for (int j = 0; j < n; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << "|\n";
        }

        // 4. عرض  الـــــــ(Tutorial)
        cout << "\n------------------------------------------" << endl;
        cout << "           Tutorial Graph             " << endl;
        cout << "------------------------------------------" << endl;

        for (int i = 0; i < n; i++)
        {
            int degree = 0;
            vector<int> neighbors;

            // حساب degree و neighbors
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] > 0)
                {
                    degree += adj[i][j];
                    neighbors.push_back(j + 1);
                }
            }

            cout << "Vertex " << i + 1 << ":\n";

            // عرض neighbors
            cout << "   - Neighbors: { ";
            if (neighbors.empty())
                cout << "None ";
            else
            {
                for (int neighbor : neighbors)

                    cout << neighbor << "(val:" << adj[i][neighbor - 1] << ") ";
            }
            cout << "}\n";

            // عرض degree
            cout << "   - Degree: " << degree << "\n";

            // فحص هل هو Isolated أم لا
            if (degree == 0)
            {
                cout << "   - Status: ISOLATED Vertex (No connections)\n";
            }
            else
            {
                cout << "   - Status: Connected\n";
            }
            cout << endl;
        }

        // 5. فحص هل الجراف Bipartite
        cout << "------------------------------------------" << endl;
        if (isBipartite(adj, n))
        {
            cout << ">>> The Graph is BIPARTITE." << endl;
        }
        else
        {
            cout << ">>> The Graph is NOT BIPARTITE." << endl;
        }
        cout << "------------------------------------------" << endl;

        cout << "do you want continue? y or n ";
        cin >> q;
    }
    return 0;
}