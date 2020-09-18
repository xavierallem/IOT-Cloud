# Rest API

![R](assignments/Assets/6c84d533fc229526581c779693b8a623_L.jpg)


In the simplest term, _**REST**_ considered to be a set of principles that assign how HTTP and URLs Web standards are used. 
The main idea is that if you comply with _**REST**_ principles while developing your application you will have a system that uses the Web’s architecture to your benefit.

An **API** is an application programming interface. It is a set of rules that allow programs to talk to each other. 
The developer creates the API on the server and allows the client to talk to it.

# The Anatomy of REST

- [**The Endpoint**](#the-endpoint)
- [**The Method**](#the-method)
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

_To Learn more [Click here](https://www.smashingmagazine.com/2018/01/understanding-using-rest-api/)_

## The Method

![L](assignments/Assets/what_is_rest_api.png)

The **Method** is the type of request you send to the server. You can choose from these four types below:

- **GET**: - This request is used to get a resource from a server. If you perform a `GET` request, the server looks for the data you requested and sends it back to you
- **POST**: - This request is used to create a new resource on a server. If you perform a `POST` request, the server creates a new entry in the database and tells you whether the creation is successful.
- **PUT**: - These two requests are used to update a resource on a server. If you perform a `PUT`  request, the server updates an entry in the database and tells you whether the update is successful
- **DELET**: - This request is used to delete a resource from a server. If you perform a `DELETE` request, the server deletes an entry in the database and tells you whether the deletion is successful.

_Example_ for GET & PUT
```
GET /users/username/repo
```

```
POST /users/repos
```
## The Headers

![l](assignments/Assets/requestpacket.jpg)

Headers are used to provide information to both the client and server. It can be used for many purposes, such as authentication and providing information about the body content.
**HTTP Headers are property-value** pairs that are separated by a colon. The example below shows a header that tells the server to expect JSON content.

```
"Content-Type: application/json". Missing the opening ".

```

You can send HTTP headers with curl through the -H or --header option. To send the above header to Github’s API, you use this command:

```
curl -H "Content-Type: application/json" https://api.github.com
```



