# POC nginx configuration parser

Currently, it can parse configuration from [nginx config example](https://www.nginx.com/resources/wiki/start/topics/examples/full/)

## Example
```
# copy from https://www.nginx.com/resources/wiki/start/topics/examples/full/
user       www www;  ## Default: nobody

http {
  include    conf/mime.types;

  server { # simple load balancing
    listen          80;
    server_name     big.server.com;

    location / {
      proxy_pass      http://big_server_com;
    }
  }
}
```
will produce
```
(source_file [0, 0] - [14, 1]
  (comment [0, 0] - [0, 76])
  (statement [1, 0] - [1, 19]
    (call_stmt [1, 0] - [1, 19]
      (identifier [1, 0] - [1, 4])
      (literal [1, 11] - [1, 14])
      (literal [1, 15] - [1, 18])))
  (comment [1, 21] - [1, 39])
  (block_definition [3, 0] - [14, 1]
    (identifier [3, 0] - [3, 4])
    consequence: (statement [4, 2] - [4, 29]
      (call_stmt [4, 2] - [4, 29]
        (identifier [4, 2] - [4, 9])
        (literal [4, 13] - [4, 28])))
    consequence: (block_definition [6, 2] - [13, 3]
      (identifier [6, 2] - [6, 8])
      consequence: (comment [6, 11] - [6, 34])
      consequence: (statement [7, 4] - [7, 23]
        (call_stmt [7, 4] - [7, 23]
          (identifier [7, 4] - [7, 10])
          (literal [7, 20] - [7, 22])))
      consequence: (statement [8, 4] - [8, 35]
        (call_stmt [8, 4] - [8, 35]
          (identifier [8, 4] - [8, 15])
          (literal [8, 20] - [8, 34])))
      consequence: (block_definition [10, 4] - [12, 5]
        (identifier [10, 4] - [10, 12])
        args: (literal [10, 13] - [10, 14])
        consequence: (statement [11, 6] - [11, 44]
          (call_stmt [11, 6] - [11, 44]
            (identifier [11, 6] - [11, 16])
            (literal [11, 22] - [11, 43])))))))
```

## Acknowledgments
+ Some grammar are taken from [tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js)
+ Configuration are copied from [official nginx website](https://www.nginx.com/resources/wiki/start/topics/examples/full/)