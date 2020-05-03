.. _Top:


.. title:: Welcome to the Universal Server umbrella presentation

.. comment stylesheet specified through GNUmakefile


.. role:: raw-html(raw)
   :format: html

.. role:: raw-latex(raw)
   :format: latex

.. comment Would appear too late, can only be an be used only in preamble:
.. comment :raw-latex:`\usepackage{graphicx}`
.. comment As a result, in this document at least a '.. figure:: XXXX' must
.. exist, otherwise: 'Undefined control sequence \includegraphics.'.


:raw-html:`<a name="us-umbrella_top"></a>`

:raw-html:`<div class="banner"><p><em>US documentation</em> <a href="http://us.esperide.org">browse latest</a> <a href="https://olivier-boudeville.github.io/Universal-Server/index.html">browse mirror</a> <a href="us-umbrella-overview-english.pdf">get PDF</a> <a href="#us-umbrella_top">go to top</a> <a href="#us-umbrella_bottom">go to bottom</a> <a href="mailto:about(dash)universal-server(at)esperide(dot)com?subject=[Universal%20Server]%20Remark">email us</a></p></div>`



:raw-html:`<center><img src="us-umbrella-title.png" width="70%"></img></center>`
:raw-latex:`\includegraphics[scale=1.5]{us-umbrella-title.png}`



=====================================================
Overview of the ``Universal Server`` Umbrella Project
=====================================================


:Organisation: Copyright (C) 2019-2020 Olivier Boudeville
:Contact: about (dash) universal-server (at) esperide (dot) com
:Creation date: Saturday, May 2, 2020
:Lastly updated: Sunday, May 3, 2020
:Status: Work in progress
:Version: 0.0.1
:Dedication: Users and maintainers of the ``Universal Server`` projects.
:Abstract:

	This umbrella overview presents the `Universal Server <https://github.com/Olivier-Boudeville/Universal-Server>`_ project, which aims to offer a software ecosystem allowing various computer-aided services (ex: monitoring, control, communication, interaction) to be implemented, through dedicated servers and interfaces (ex: web, SMS, sensors).


.. meta::
   :keywords: Universal Server


:raw-latex:`\pagebreak`

.. contents:: Table of Contents
	:depth: 2


:raw-latex:`\pagebreak`

--------
Overview
--------

This mostly empty overview serves only as an entry point to the various parts of the US framework.

From the highest level to the lowest, the software stack involved in the Universal Server is the following:

:raw-html:`<center><img src="us-dependencies.png" width="30%"></img></center>`
:raw-latex:`\includegraphics[scale=0.55]{us-dependencies.png}`

:raw-latex:`\pagebreak`

More precisely this stack entails:

- the *Universal Server* (see `us-main <http://us-main.esperide.org/>`_) and the *Universal Webserver* (`us-web <http://us-web.esperide.org/>`_), the currently available applicative layers
- `US-Common <http://us-common.esperide.org/>`_ (for shared facilities)
- `Ceylan-Traces <http://traces.esperide.org>`_ (for advanced runtime traces)
- `Ceylan-WOOPER <http://wooper.esperide.org>`_ (for OOP)
- `Ceylan-Myriad <http://myriad.esperide.org>`_ (as an Erlang toolbox)
- `Erlang <http://erlang.org>`_ (for the compiler and runtime)
- `GNU/Linux <https://en.wikipedia.org/wiki/Linux>`_



-----------
Ending Word
-----------

Have fun with the Universal Server!

.. comment Mostly added to ensure there is at least one figure directive,
.. otherwise the LateX graphic support will not be included:

.. figure:: us-umbrella-title.png
   :alt: US-Umbrella logo
   :width: 50 %
   :align: center

:raw-html:`<a name="us-umbrella_bottom"></a>`
