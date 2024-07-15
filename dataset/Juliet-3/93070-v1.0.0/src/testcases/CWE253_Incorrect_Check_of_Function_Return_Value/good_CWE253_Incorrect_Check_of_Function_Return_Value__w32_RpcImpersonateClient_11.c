void FUN0()
{
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
