\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "Vn."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key a \minor
		R1*4  |
%% 5
		c'' 2 b'  |
		a' 2 f'  |
		d'' 2 g''  |
		e'' 1  |
		c'' 2 b'  |
%% 10
		a' 2 f'  |
		f' 2 g'  |
		g' 1  |
		gis' 1  |
		\key a \major
		cis'' 2 b' 4 a'  |
%% 15
		a' 2 gis'  |
		d'' 4 fis'' e'' d''  |
		a'' 2 e'' 4 d''  |
		cis'' 4 cis''' b'' a''  |
		fis'' 2 e''  |
%% 20
		r4 d'' fis'' d''' 8 cis'''  |
		b'' 4 fis'' d'' cis''  |
		b' 2. a' 4  |
		b' 1  |
		e'' 1 ~  |
%% 25
		e'' 2 r8 r16 cis'' 8 d'' 16 cis'' 8  |
		a' 2 e'  |
		a' 2 b'  |
		R1  |
		R2  |
%% 30
		r8 e' 16 fis' gis' a' e'' 8 e' 16 fis' gis' a' b' gis' fis' e'  |
		e'' 1 ~  |
		e'' 2 r8 r16 cis'' 8 d'' 16 cis'' 8  |
		a' 2 e'  |
		a' 2 b'  |
%% 35
		R1  |
		d'' 2 b'  |
		a' 1  |
		\key a \minor
		R1*4  |
		c'' 2 b'  |
		a' 2 f'  |
		d'' 2 g''  |
%% 45
		e'' 1  |
		c'' 2 b'  |
		a' 2 f'  |
		f' 2 g'  |
		g' 1  |
%% 50
		gis' 1  |
		\key a \major
		cis'' 2 b' 4 a'  |
		a' 2 gis'  |
		d'' 4 fis'' e'' d''  |
		a'' 2 e'' 4 d''  |
%% 55
		cis'' 4 cis''' b'' a''  |
		fis'' 2 e''  |
		r4 d'' fis'' d''' 8 cis'''  |
		b'' 4 fis'' d'' cis''  |
		b' 2. a' 4  |
%% 60
		b' 1  |
		e'' 1 ~  |
		e'' 2 r8 r16 cis'' 8 d'' 16 cis'' 8  |
		a' 2 e'  |
		a' 2 e'  |
%% 65
		R1  |
		R2  |
		r8 e' 16 fis' gis' a' e'' 8 e' 16 fis' gis' a' b' gis' fis' e'  |
		e'' 1 ~  |
		e'' 2 r8 r16 cis'' 8 d'' 16 cis'' 8  |
%% 70
		a' 2 e'  |
		a' 2 e'  |
		R1  |
		d'' 2 b'  |
		a' 2 ~ a'  |
%% 75
		d'' 2 b'  |
		a' 2 ~ a'  |
		d'' 2 b'  |
		a' 2 ~ a' ~  |
		a' 2 r  |
		\bar "|."
	}

>>
