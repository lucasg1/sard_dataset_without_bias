void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
    else
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
