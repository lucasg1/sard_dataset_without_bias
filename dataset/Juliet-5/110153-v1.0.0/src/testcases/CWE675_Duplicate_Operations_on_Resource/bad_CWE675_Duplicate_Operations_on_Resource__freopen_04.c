static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        fclose(data);
<END>
    }
}
