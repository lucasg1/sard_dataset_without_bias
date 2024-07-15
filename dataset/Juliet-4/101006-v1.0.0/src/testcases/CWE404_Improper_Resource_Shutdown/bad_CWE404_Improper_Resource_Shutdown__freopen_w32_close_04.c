static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(STATIC_CONST_TRUE)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
