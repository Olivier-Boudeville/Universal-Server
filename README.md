# Universal-Server

![](/us-umbrella-title.png)

The **Universal-Server project** (`US`) has for goal to provide an infrastructure able to support a wide range of computer-based services.

This repository is just an umbrella, in the sense it is mostly empty: its purpose is only to federate and give access to the `us-*` actual subprojects. 

The **US** project currently comprises indeed 3 public subprojects:
 - [us-common](https://github.com/Olivier-Boudeville/us-common): for all the **base facilities** on which the various Universal Services are built
 - [us-main](https://github.com/Olivier-Boudeville/us-main): for the **Universal Server** itself, the main daemon involved 
 - [us-web](https://github.com/Olivier-Boudeville/us-web): for the **Universal Webserver**, which is a multi-domain, multi-virtualhost webserver
  
![US dependencies](us-dependencies.png "US Dependencies")

The US infrastructure depends on the [Ceylan](https://github.com/Olivier-Boudeville/Ceylan) one.

Please refer to the [Universal Server official documentation](http://us.esperide.org) for further information, otherwise to its [mirror](http://olivier-boudeville.github.io/us/).
