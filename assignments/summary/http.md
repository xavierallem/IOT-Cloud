# HTTP (Hypertext Transfer Protocol)

_HTTP (Hypertext Transfer Protocol)_ is a text language that allows two machines to communicate with each other. For example,
when checking for a broswer page, the following (approximate) conversation takes place:

![L](assignments/Assets/Gzip-HTTP-Request-Response.jpg)


HTTP is the term used to describe this text-based language. The goal of your server is always to understand text requests and return text responses.

## Working

![l](assignments/Assets/Basic_Static_App_Server.png)

### Client Request 

Every conversation on the web starts with a request. The request is a text message created by a client (e.g. a browser,
a smartphone app, etc) in a special format known as HTTP. The client sends that request to a server, and then waits for the response.




```http
GET / HTTP/1.1
Host: xyz.com
Accept: text/html
User-Agent: Mozilla/5.0 


```
These few lines communicate everything necessary about exactly which resource the client is requesting. The first line of an HTTP request is the most important, because it contains two important things: the HTTP method (GET) and the URI (/).

The URI (e.g. /, /contact, etc) is the unique address or location that identifies the resource the client wants. The HTTP method (e.g. GET) defines what the client wants to do with the resource. The HTTP methods (also known as verbs) 
define the few common ways that the client can act upon the resource - the most common HTTP methods are:

- **GET**: - Retrieve the resource from the server (e.g. when visiting a page);
- **POST**: -  Create a resource on the server (e.g. when submitting a form);
- **PUT/PATCH**: - Update the resource on the server (used by APIs);
- **DELETE**: - Delete the resource from the server (used by APIs).

### Server Response

Once a server has received the request, it knows exactly which resource the client needs (via the URI) and what the client wants to do with that resource (via the method).

eg.

```http
HTTP/1.1 200 OK
Date: Sat, 02 Apr 2011 21:05:05 GMT
Server: lighttpd/1.4.19
Content-Type: text/html

<html>
    <!-- ... HTML for page -->
</html>


```

The HTTP response contains the requested resource (the HTML content in this case), as well as other information about the response. The first line is especially important and contains the HTTP response status code (200 in this case).

The status code communicates the overall outcome of the request back to the client. Was the request successful? Was there an error? Different status codes exist that indicate success, an error or that the client needs to do something (e.g. redirect to another page).

ike the request, an HTTP response contains additional pieces of information known as HTTP headers. The body of the same resource could be returned in multiple different formats like HTML, XML or JSON and the Content-Type header uses Internet Media Types like text/html to tell the client which format is being returned.
