# Rest API

![R](assignments/Assets/6c84d533fc229526581c779693b8a623_L.jpg)


In the simplest term, _**REST**_ considered to be a set of principles that assign how HTTP and URLs Web standards are used. 
The main idea is that if you comply with _**REST**_ principles while developing your application you will have a system that uses the Web’s architecture to your benefit.

An **API** is an application programming interface. It is a set of rules that allow programs to talk to each other. 
The developer creates the API on the server and allows the client to talk to it.

# The Anatomy of REST

- [**The Endpoint**]()
- [**The Method**]()
- [**The Headers**]()
- [**The Data**]()


## The Endpoint

**The endpoint** (or route) is the url you request for. It follows this structure:

```rest
root-endpoint/?
```

![lo](assignments/Assets/download.png)

The **root-endpoint** is the starting point of the API you’re requesting from. The root-endpoint of Github’s API is https://api.github.com while the root-endpoint Twitter’s API is https://api.twitter.com. 
The path determines the resource you’re requesting for