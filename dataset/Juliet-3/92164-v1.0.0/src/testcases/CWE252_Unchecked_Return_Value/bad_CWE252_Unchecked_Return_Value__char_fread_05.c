static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
<END>
        }
    }
}
