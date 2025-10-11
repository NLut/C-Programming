# FS-Linking
## Hard-Link: 
```ln [source-path] [dest-link-path]```
- Like copy the whole file to linked place.
- Difference from copy b/c if the chage occur in either file both will be changed.
- Faster than soft link since don't have to resolve destination.
- Can't link across the filesystem system.

```ln -s [source-path] [dest-link-path]```
## Soft-Link(Symlink): ln
- Just create the reference to that file.
- Slower than hard link, since have to resolve the destination.
- Save more storage space.
- Can link across the filesystem.

### *Example of soft and hard link.*
```
-rw-r--r--@   2 natapat  staff  1028297 Sep 16 10:02 hardlink.pdf
lrwxr-xr-x@   1 natapat  staff       87 Sep 16 10:31 softlink -> /Users/natapat/Documents/somchart_v2/IndexTree_An_Efficient_Tampe
r-Evidence_Logging.pdf
```

