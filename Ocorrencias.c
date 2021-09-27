int num_ocorrencias_x (Arv* a, int x){
	if (a==NULL) return 0;
		if (a->info == x) 
			return 1 + ocor_x(a->dir, x);
		if (a->info < x)
			return ocor_x(a->dir, x);
	return ocor_x(a->esq, x);
}