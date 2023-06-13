vector<Node*> reverseGroupOfK(Node* head,int k) {
	if(!head)
		return {NULL, NULL, NULL};

	if(!head->next)return {head,NULL,head};

		Node* temp = NULL;
		Node* tail = head;
		Node* next = NULL;

	for(int i = k; i>=1 and head ; i--) {
		next = head->next;
		head->next = temp;
		temp = head;
		head = next;
	}
	return {temp, next, tail};
}


Node *getListAfterReverseOperation(Node *head, int n, int b[]) {
	if(!head || !head->next)return head;

	Node* dummy = new Node(-1);
	Node* ans = dummy;
	Node* temp = head;

	int i = 0;

	for(int i = 0; i < n; i++) {
		if(b[i] == 0) {
			continue;
		}

		vector<Node*> p;
		if(temp)
			p = reverseGroupOfK(temp,b[i]);
		else break;

		dummy->next = p[0];
		temp = p[1];
		dummy = p[2];
	}

	if(temp)dummy->next = temp;
	return ans->next;
}
