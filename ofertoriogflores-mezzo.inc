\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key a \minor
		R1*8  |
		e' 16 ( d' e' 4. ) e' 16 ( d' e' 4. )  |
%% 10
		r8 e' 16 ( d' e' 8 ) d' 16 ( c' d' 2 )  |
		d' 2 b  |
		c' 2 ~ c' 4 r8 b 16 ( a
		% warning: overlong bar truncated here |
		b 1 )  |
		\key a \major
		r8 a' 16 a' a' 8. a' 16 gis' 8 e' 16 fis' ~ fis' gis' 8.  |
%% 15
		r8 cis' 16 cis' cis' 8. cis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
		fis' 8 e' d' cis' 16 d' ~ d' 4 r8 d' 16 e'  |
		fis' 8 e' d' cis' cis' 4 e'  |
		r8 a' 16 a' a' 8. a' 16 gis' e' 8 fis' 16 ~ fis' gis' 8.  |
		r8 cis' 16 cis' cis' 8. cis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
%% 20
		fis' 8 e' d' cis' 16 fis' ~ fis' 4 r8 a  |
		fis' 8 e' d' cis' 16 fis' ~ fis' 8 e' d' cis' 16 g' ~  |
		g' 8 g' r cis' 16 cis' fis' 8 e' 16 fis' ~ fis' gis' 8.  |
		gis' 2. r8 cis'  |
		cis' 4 cis' d' 8. b b 8  |
%% 25
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
		cis' 4 cis' d' 8. b 16 ~ b 4  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
		cis' 4 cis' fis' 8. d' d' 8  |
		fis' 8. e' fis' 8  |
%% 30
		e' 2. r8 cis'  |
		cis' 4 cis' d' 8. b b 8  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
		cis' 4 cis' d' 8. b 16 ~ b 4  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
%% 35
		cis' 4 cis' fis' 8. d' 16 ~ d' 4  |
		fis' 8. e' cis' 8 fis' 8. e' cis' 8  |
		cis' 2. r4  |
		\key a \minor
		R1*8  |
		e' 16 ( d' e' 4. ) e' 16 ( d' e' 4. )  |
		r8 e' 16 ( d' e' 8 ) d' 16 ( c' d' 2 )  |
		d' 2 b  |
		c' 2 ~ c' 4 r8 b 16 ( a
		% warning: overlong bar truncated here |
%% 50
		b 1 )  |
		\key a \major
		r8 a' 16 a' a' 8. a' 16 gis' 8 e' 16 fis' ~ fis' gis' 8.  |
		r8 cis' 16 cis' cis' 8. cis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
		fis' 8 e' d' cis' 16 d' ~ d' 4 r8 d' 16 e'  |
		fis' 8 e' d' cis' cis' 4 e'  |
%% 55
		r8 a' 16 a' a' 8. a' 16 gis' e' 8 fis' 16 ~ fis' gis' 8.  |
		r8 cis' 16 cis' cis' 8. cis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
		fis' 8 e' d' cis' 16 fis' ~ fis' 4 r8 a  |
		fis' 8 e' d' cis' 16 fis' ~ fis' 8 e' d' cis' 16 g' ~  |
		g' 8 g' r cis' 16 cis' fis' 8 e' 16 fis' ~ fis' gis' 8.  |
%% 60
		gis' 2. r8 cis'  |
		cis' 4 cis' d' 8. b b 8  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
		cis' 4 cis' d' 8. b 16 ~ b 4  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
%% 65
		cis' 4 cis' fis' 8. d' d' 8  |
		fis' 8. e' fis' 8  |
		e' 2. r8 cis'  |
		cis' 4 cis' d' 8. b b 8  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
%% 70
		cis' 4 cis' d' 8. b 16 ~ b 4  |
		fis' 8. e' fis' 8 gis' 4 r8 cis'  |
		cis' 4 cis' fis' 8. d' 16 ~ d' 4  |
		fis' 8. e' cis' 8 fis' 8. e' cis' 8  |
		cis' 2. r4  |
%% 75
		fis' 8. e' cis' 8 fis' 8. e' cis' 8  |
		cis' 2. r4  |
		fis' 8. e' cis' 8 fis' 8. e' cis' 8  |
		cis' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzosoprano" {
		Uh __ uh __ uh __ uh__
		uh uh uh __ uh. __

		Pues la vi -- "da es" u -- na vi __ ña
		y la u -- "va es" nues -- "tro es" -- fuer __ zo,
		tó -- ma -- lo, Se -- ñor, __
		y re -- cí -- be -- "lo en" tus ma -- nos.

		Y el pan que pre -- sen -- ta __ mos
		es el fru -- to del tra -- ba __ jo de los hom -- bres que, __
		reu -- ni -- dos hoy a -- quí, __
		te ben -- de -- ci __ mos
		y can -- ta -- mos en __ "tu ho" -- nor.

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as por siem -- pre, Se -- ñor!

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as siem -- pre, por siem -- pre, Se -- ñor!

		Uh __ uh __ uh __ uh__
		uh uh uh __ uh. __

		Pues la vi -- "da es" u -- na vi __ ña
		y la u -- "va es" nues -- "tro es" -- fuer __ zo,
		tó -- ma -- lo, Se -- ñor, __
		y re -- cí -- be -- "lo en" tus ma -- nos.

		Y el pan que pre -- sen -- ta __ mos
		es el fru -- to del tra -- ba __ jo de los hom -- bres que, __
		reu -- ni -- dos hoy a -- quí, __
		te ben -- de -- ci __ mos
		y can -- ta -- mos en __ "tu ho" -- nor.

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as por siem -- pre, Se -- ñor!

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as siem -- pre, por siem -- pre, Se -- ñor!

		¡Siem -- pre, por siem -- pre, Se -- ñor!
		¡Siem -- pre, por siem -- pre, Se -- ñor!

	}

>>
