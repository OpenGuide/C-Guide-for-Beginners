int linear_search(int size, int *A, int elem) {
  for (int i = 0; i < size; i++) {
    if(A[i] == elem)
      return 1;
  }
  return 0;
}
