\context Staff = "viola" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Va."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "viola" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "C"

		\key a \minor
		a 2 g  |
		fis 2 f  |
		a 2 g  |
		fis 2 f  |
%% 5
		a 2 g  |
		fis 2 f  |
		d 2 g  |
		c 2 e  |
		e' 16 d' e' 4. e' 16 d' e' 4.  |
%% 10
		r8 e' 16 d' e' 8 d' 16 c' a 2  |
		a 2 b  |
		c' 2 ~ c' 4. c' 16 d'  |
		e' 1  |
		\key a \major
		cis'' 2 b' 4 a'  |
%% 15
		a' 2 gis'  |
		fis' 1  |
		fis' 2 gis' 4 a'  |
		a' 2 b' 4 a'  |
		a' 2 gis'  |
%% 20
		fis' 1  |
		fis' 1  |
		g' 1  |
		gis' 1  |
		a' 2 gis'  |
%% 25
		fis' 2 e'  |
		a' 2 gis'  |
		fis' 2 e'  |
		R1  |
		b' 8. fis' d' 8  |
%% 30
		e' 2 ~ e'  |
		a' 2 gis'  |
		fis' 2 e'  |
		a' 2 gis'  |
		fis' 2 e'  |
%% 35
		R1  |
		b' 8. fis' d' 8 e' 8. fis' gis' 8  |
		a' 2 ~ a'  |
		\key a \minor
		a 2 g  |
		fis 2 f  |
%% 40
		a 2 g  |
		fis 2 f  |
		a 2 g  |
		fis 2 f  |
		d 2 g  |
%% 45
		c 2 e  |
		e' 16 d' e' 4. e' 16 d' e' 4.  |
		r8 e' 16 d' e' 8 d' 16 c' a 2  |
		a 2 b  |
		c' 2 ~ c' 4. c' 16 d'  |
%% 50
		e' 1  |
		\key a \major
		cis'' 2 b' 4 a'  |
		a' 2 gis'  |
		fis' 1  |
		fis' 2 gis' 4 a'  |
%% 55
		a' 2 b' 4 a'  |
		a' 2 gis'  |
		fis' 1  |
		fis' 1  |
		g' 1  |
%% 60
		gis' 1  |
		a' 2 gis'  |
		fis' 2 e'  |
		a' 2 gis'  |
		fis' 2 e'  |
%% 65
		R1  |
		b' 8. fis' d' 8  |
		e' 2 ~ e'  |
		a' 2 gis'  |
		fis' 2 e'  |
%% 70
		a' 2 gis'  |
		fis' 2 e'  |
		R1  |
		b' 8. fis' d' 8 e' 8. b gis 8  |
		a 2 ~ a  |
%% 75
		b' 8. fis' d' 8 e' 8. b gis 8  |
		a 2 ~ a  |
		b' 8. fis' d' 8 e' 8. fis' gis' 8  |
		e' 2 ~ e' ~  |
		e' 2 r  |
		\bar "|."
	}

>>
