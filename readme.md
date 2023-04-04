# RDMA-based optimization of array database network modules

This project is based on the open source array database SciDB (now closed source, using the previous open source version 19.11), and adds the RDMA module to the network module, which can be used in environments with RDMA networks to improve the query performance of SciDB.

## Usage：

1. Follow the installation documentation of SciDB to complete the installation of SciDB dependency modules.
2. added Muduo open source library dependencies, you need to install Muduo, Muduo project address: [Muduo](https://github.com/chenshuo/muduo).
3. modify use-rdma in the configuration file config.ini to true to use RDMA network to send data directly.
4. Just start the cluster.

## Edited code

The new code is mainly in the network module src/network/rdma directory, and the files entry.cpp and connection.cpp have also been modified.