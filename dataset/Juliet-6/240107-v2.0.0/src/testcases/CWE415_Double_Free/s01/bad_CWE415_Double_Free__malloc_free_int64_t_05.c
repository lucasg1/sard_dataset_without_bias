static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(staticTrue)
    {
        free(data);
    }
}
