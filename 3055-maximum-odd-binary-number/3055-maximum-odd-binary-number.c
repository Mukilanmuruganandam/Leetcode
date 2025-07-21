char* maximumOddBinaryNumber(char* s) {
  char* p=s;
  char* q=s;
  while(*q) 
  {
    if(*q=='1') 
    {
      *q=*p;
      *p='1';
      ++p;
    }
    ++q;
  }
  *(p-1)='0';
  *(q-1)='1';
  return s;
}