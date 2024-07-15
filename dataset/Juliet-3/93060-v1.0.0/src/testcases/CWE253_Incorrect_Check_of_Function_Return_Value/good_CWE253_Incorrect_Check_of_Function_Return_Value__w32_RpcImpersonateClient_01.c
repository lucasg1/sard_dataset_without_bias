void FUN0()
{
    if (RpcImpersonateClient(0) != RPC_S_OK)
    {
        exit(1);
    }
}
