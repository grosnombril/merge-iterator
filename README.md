# merge-iterator

```
int main()
{
    vector< vector<int> > myLists { { 2, 4, 18, 20, 25}, {1, 3, 5, 12}};

    SortedIterator i = SortedIterator(myLists);
    while (i.hasNext()) cout << i.next() << endl;
}
```

will output :

```
1
2
3
4
5
12
18
20
25
```
