void Find(Node **first) {
        cout << "position: ";
        int count;
        int n;
        cin >> n;
        Node *curr = *first;
        while (count != n) {
                count++;
                if (count == n)
                        cout << curr->a << endl;
                curr = curr->next;
        }
}
