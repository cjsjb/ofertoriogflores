\context Staff = "cello" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "bass"
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
		a 2 g  |
%% 10
		fis 2 f  |
		d 2 g  |
		c 1  |
		e 1  |
		\key a \major
		a 2 e  |
%% 15
		fis 2 cis  |
		b, 2 ~ b,  |
		d 2 e  |
		a 2 gis  |
		fis 2 e  |
%% 20
		d 2 ~ d  |
		b, 2 ~ b,  |
		g, 2 ~ g,  |
		e 2 ~ e  |
		a 2 e  |
%% 25
		d 2 e  |
		a 2 e  |
		d 2 e  |
		fis 2 d'  |
		\time 2/4
		b 8. fis d 8  |
%% 30
		\time 4/4
		e 2 ~ e  |
		a 2 gis  |
		fis 2 e  |
		a 2 gis  |
		fis 2 e  |
%% 35
		fis 2 d'  |
		b 8. fis d 8 e 8. fis gis 8  |
		a 2 ~ a  |
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
		a 2 g  |
		fis 2 f  |
		d 2 g  |
		c 1  |
%% 50
		e 1  |
		\key a \major
		a 2 e  |
		fis 2 cis  |
		b, 2 ~ b,  |
		d 2 e  |
%% 55
		a 2 gis  |
		fis 2 e  |
		d 2 ~ d  |
		b, 2 ~ b,  |
		g, 2 ~ g,  |
%% 60
		e 2 ~ e  |
		a 2 e  |
		d 2 e  |
		a 2 e  |
		d 2 e  |
%% 65
		fis 2 d'  |
		\time 2/4
		b 8. fis d 8  |
		\time 4/4
		e 2 ~ e  |
		a 2 gis  |
		fis 2 e  |
%% 70
		a 2 gis  |
		fis 2 e  |
		fis 2 d'  |
		b 8. fis d 8 e 8. b, gis, 8  |
		a, 2 ~ a,  |
%% 75
		b 8. fis d 8 e 8. b, gis, 8  |
		a, 2 ~ a,  |
		b 8. fis d 8 e 8. fis gis 8  |
		a 2 ~ a ~  |
		a 2 r  |
		\bar "|."
	}

>>
