static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
