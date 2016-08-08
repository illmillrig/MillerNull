#MillerNull
This was one of my first c++ maya plugins.  I'm uploading it in effort that someone will make it faster.  It's pretty quick, but unfortunately does not draw as fast as the default maya locator for right now.  Which is really too bad, Maya has been in need of a 'null' with built in openGL shapes for a long time.

only supports vp2

![millnull](https://cloud.githubusercontent.com/assets/12991367/17464532/0539a08c-5c96-11e6-9dd7-1e1a50b93961.png)

TODO:
- Use the built in attributes on MPxLocator for things like position, and scale instead of creating new ones.  at one point, I was not subclassing MPxLocator and never changed this when I started subclassing MPxLocator.
- Add Pnt snapping centers

**One of the reasons it's slow is because each instance of a millerNull is getting two MShaderInstances.  I can't figure out a way to share the same MShaderInstance across all instances of a millerNull and still have unique color, opacity, selection highlighting, drawoverrides, etc.  Maybe there is a way that Im just not seeing.

**sorry about the lack of comments.  Most of these plugins on my repo started out as just 'code sketches'. I had an idea that i was playing around with at the time and needed something to test things on. They're more learning exercies than anything else ;)
