/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf -L C++ -E -t /tmp/jormagar/filepicker-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/tmp/jormagar/filepicker-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.filepicker.ExampleProxy.h"
#include "ti.filepicker.FilepickerModule.h"


#line 14 "/tmp/jormagar/filepicker-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 5, duplicates = 0 */

class FilepickerBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
FilepickerBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
FilepickerBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 26,
      MAX_WORD_LENGTH = 30,
      MIN_HASH_VALUE = 26,
      MAX_HASH_VALUE = 30
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/tmp/jormagar/filepicker-generated/KrollGeneratedBindings.gperf"
      {"ti.filepicker.ExampleProxy", ::ti::filepicker::filepicker::ExampleProxy::bindProxy, ::ti::filepicker::filepicker::ExampleProxy::dispose},
      {""}, {""}, {""},
#line 17 "/tmp/jormagar/filepicker-generated/KrollGeneratedBindings.gperf"
      {"ti.filepicker.FilepickerModule", ::ti::filepicker::FilepickerModule::bindProxy, ::ti::filepicker::FilepickerModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/tmp/jormagar/filepicker-generated/KrollGeneratedBindings.gperf"

