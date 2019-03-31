# Arduino
Arduino.
Codigos creados para Visual Studio. 

GitHub Markup
=============

This library is the **first step** of a journey that every markup file in a repository goes on before it is rendered on GitHub.com:

1. `github-markup` selects an _underlying library_ to convert the raw markup to HTML. See the list of [supported markup formats](#markups) below.
1. The HTML is sanitized, aggressively removing things that could harm you and your kin—such as `script` tags, inline-styles, and `class` or `id` attributes.
1. Syntax highlighting is performed on code blocks. See [github/linguist](https://github.com/github/linguist#syntax-highlighting) for more information about syntax highlighting.
1. The HTML is passed through other filters that add special sauce, such as emoji, task lists, named anchors, CDN caching for images, and autolinking.
1. The resulting HTML is rendered on GitHub.com.

Please note that **only the first step** is covered by this gem — the rest happens on GitHub.com.  In particular, `markup` itself does no sanitization of the resulting HTML, as it expects that to be covered by whatever pipeline is consuming the HTML.
