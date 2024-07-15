static int VAR0 = 0;
void FUN0(int64_t * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR0 = 1; 
    FUN0(data);
}
