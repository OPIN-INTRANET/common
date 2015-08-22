<?php
/**
 * @file
 * search_server_opin_solr.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function search_server_opin_solr_default_search_api_server() {
  $items = array();
  $items['opin_solr_instance'] = entity_import('search_api_server', '{
    "name" : "Opin Solr Instance",
    "machine_name" : "opin_solr_instance",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/opin-solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
