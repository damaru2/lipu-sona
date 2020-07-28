#define HASH(x) x

#define C_PAGEBG #404a68
#define C_HEADERBG #221f31
#define C_HEADERBGHALF rgba(34,31,49,0.5)
#define C_BODYBG #fefefe
#define C_FOOTERBG #050403

#define C_HEADERFG #fefefe
#define C_BODYFG #050403
#define C_FOOTERFG #fefefe
#define C_BLEAKFG #9a93b7

#define C_BBORDER #221f31

#define C_DLINK #221f31
#define C_LINK #404a68
#define C_VISLINK #678fcb
#define C_FOOTLINK #8be1e0

#define C_DBORDER #404a68
#define C_LBORDER #9a93b7

#define C_DERR #a14d3f
#define C_LERR #ea9182
#define C_DINF #221f31
#define C_LINF #8be1e0
#define C_DWRN #9b6e2d
#define C_LWRN #f5ee9b

#define C_LGREEN #7cc264
#define C_DGREEN #316F23

@font-face {
	font-family: "Xolonium";
	src: url("/Xolonium-Regular.otf");
}

@font-face {
	font-family: "sitelen pona pona";
	src: url("/tokipona/sitelen-pona-pona.otf");
}

html {
	min-height: 100%;
}

body {
	background: C_BODYBG;
	color:C_BODYFG;
	min-height: 100%;
	margin: 0;
}

blockquote {
	margin: 6pt;
	padding-inline: 1em;
	border-inline-start: 4px solid C_LBORDER;
}

p {
	line-height: 1.5em;
}

table {
	background: #fefefe;
	border: 2px solid C_LBORDER;
	border-collapse: collapse;
}

th, td {
    border: 1px solid C_DBORDER;
    padding: 4pt;
}

.header {
	background: C_HEADERBG;
	color: C_HEADERFG;
	font-family: sans-serif;
	min-height: 1px;

}

.header_text {
	padding-block: 0.5em;
}

.header a, .header a:visited {
	color: inherit;
}

.header h2, .header h3 {
	display: inline;
}

.footer, .navbar {
	background: C_FOOTERBG;
	color: C_FOOTERFG;
	text-align: center;
	font-family: sans-serif;
	font-size: 0.8em;
}

.navbar {
	padding: 6pt;
}

.footer {
	padding: 12pt 6pt;
}

.nav_linkmenu a {
	display: inline-block;
	background: C_FOOTERBG;
	margin: 3px;
	padding: 3px;
	border: 1px solid C_DBORDER;
	color: C_FOOTLINK;
}

.nav_linkmenu a:hover {
	background: C_LWRN;
	color: C_BODYFG;
	border: 1px solid C_DWRN;
}

.nav_linkmenu a:active {
	background: C_LGREEN;
	color: C_BODYFG;
	border: 1px solid C_DGREEN;
}

.footer a, .footer a:visited {
	color: C_FOOTLINK;
}

.content {
	margin: 0 6pt;
	color: C_BODYFG;
	font-family: serif;
}

.content a, .content a:visited {
	color: C_LINK;
}

.content a:focus, .content a:hover {
	color: C_DLINK;
}

.info, .warning, .error {
	margin: 6pt;
	padding-inline-start: 0.5em;
	font-family: sans-serif;
}

.info:before, .warning:before, .error:before {
	font-family: "Xolonium", sans-serif;
	float:inline-end;
	font-size: 3em;
	padding-inline-end: 0.2em;
}

.info:before {
	content: "★";
}

.warning:before {
	content: "⚠";
}

.error:before {
	content: "⛔";
}

.info {
	border-inline-start: 4px solid C_DINF;
	background: C_LINF;
	color: C_DINF;
}

.warning {
	border-inline-start: 4px solid C_DWRN;
	background: C_LWRN;
	color: C_DWRN;
}

.error {
	border-inline-start: 4px solid C_DERR;
	background: C_LERR;
	color: C_DERR;
}

.spoiler {
	border-inline-start: 4px solid C_DBORDER;
	color:;
	visibility: hidden;
}

.pona {
	font-family:"sitelen pona pona";
	font-size: 1.5em;
}

.itime {
	border: 1px solid C_BBORDER;
	width: 15em;
	padding: 6px;
	margin:auto;
}

.itime-bar {
	height: 0.5em;
	width: 100%;
}

HASH(#itime-progress) {
	width: 0%;
	height: 100%;
	background: C_LGREEN;
}

@media screen and (min-width: 480px) {

	.header {
	}

	.header_text {
		background: C_HEADERBGHALF;
		padding-inline: 2em;
	}
	.content {
		padding-inline: 1em;
		padding-block-end: 1em;
	}

	.info, .warning, .error {
		padding: 6pt;
		padding-inline-start: 1em;
	}

	.itime {
		float: right;
	}
}

@media screen and (min-width:768pt) {
	html {
		background:C_PAGEBG;
	}
	body {
		box-shadow: 0 0 0 1px C_BBORDER;
		max-width: 768pt;
		margin: auto;
	}
	.middle {
		display: grid;
		grid-template-columns: 160pt auto;
		grid-template-rows: 100fr auto;
	}
	.navbar {
		grid-column-start: 1;
		grid-column-end: 2;
		grid-row-start: 1;
		grid-row-end: 2;
	}
	.footer {
		grid-column-start: 1;
		grid-column-end: 2;
		grid-row-start: 2;
		grid-row-end: 3;
	}
	.content {
		grid-column-start: 2;
		grid-column-end: 3;
		grid-row-start: 1;
		grid-row-end: 3;
	}
	.nav_linkmenu a {
		display: block;
	}
}

