<?php
/**
 * @file
 * toulouse_notify.features.inc
 */

/**
 * Implementation of hook_default_message_type().
 */
function toulouse_notify_default_message_type() {
  $items = array();
  $items['email_group_content'] = entity_import('message_type', '{
    "name" : "email_group_content",
    "description" : "Email group content",
    "argument_keys" : [
      "@name",
      "@title",
      "@author",
      "@group-title",
      "@url",
      "@site-name",
      "@site-url"
    ],
    "category" : "message_type_email",
    "message_text" : {
      "en" : [
        {
          "value" : "Hi @name,\\r\\n\\r\\n@title was posted by @author in group @group-title\\r\\n\\r\\nVisit the post here -- @url\\r\\n\\r\\n@site-name\\r\\n@site-url",
          "format" : "filtered_html",
          "safe_value" : "\\u003cp\\u003eHi @name,\\u003c\\/p\\u003e\\n\\u003cp\\u003e@title was posted by @author in group @group-title\\u003c\\/p\\u003e\\n\\u003cp\\u003eVisit the post here -- @url\\u003c\\/p\\u003e\\n\\u003cp\\u003e@site-name\\u003cbr \\/\\u003e\\n@site-url\\u003c\\/p\\u003e\\n"
        }
      ],
      "fr" : [
        {
          "value" : "Salut @name,\\r\\n\\r\\n@title was posted by @author in group @group-title\\r\\n\\r\\nVisit the post here -- @url\\r\\n\\r\\n@site-name\\r\\n@site-url",
          "format" : "filtered_html",
          "safe_value" : "\\u003cp\\u003eSalut @name,\\u003c\\/p\\u003e\\n\\u003cp\\u003e@title was posted by @author in group @group-title\\u003c\\/p\\u003e\\n\\u003cp\\u003eVisit the post here -- @url\\u003c\\/p\\u003e\\n\\u003cp\\u003e@site-name\\u003cbr \\/\\u003e\\n@site-url\\u003c\\/p\\u003e\\n"
        }
      ]
    },
    "message_text_subject" : {
      "en" : [
        {
          "value" : "Group @group-title :: New post",
          "format" : null,
          "safe_value" : "Group @group-title :: New post"
        }
      ],
      "fr" : [
        {
          "value" : "Group @group-title :: New post",
          "format" : null,
          "safe_value" : "Group @group-title :: New post"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
