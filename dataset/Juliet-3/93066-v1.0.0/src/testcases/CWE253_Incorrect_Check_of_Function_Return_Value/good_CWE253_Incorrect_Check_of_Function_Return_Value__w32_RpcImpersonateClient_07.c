static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
